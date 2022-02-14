
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {int n_type; int n_name; struct name* n_flink; } ;


 int VAR_0 ;
 int FUNC_0 (struct name*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (char*) ;

char **
FUNC_4(struct name *VAR_1)
{
 char **VAR_2, **VAR_3;
 struct name *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_4 = VAR_1;
 if ((VAR_5 = FUNC_0(VAR_4)) == 0)
  FUNC_1(1, "No names to unpack");






 VAR_6 = 2;
 VAR_6++;
 VAR_7 = FUNC_3("metoo") != ((void*)0);
 if (VAR_7)
  VAR_6++;
 VAR_8 = FUNC_3("verbose") != ((void*)0);
 if (VAR_8)
  VAR_6++;
 VAR_3 = (char **)FUNC_2((VAR_5 + VAR_6) * sizeof(*VAR_3));
 VAR_2 = VAR_3;
 *VAR_2++ = "sendmail";
 *VAR_2++ = "-i";
 if (VAR_7)
  *VAR_2++ = "-m";
 if (VAR_8)
  *VAR_2++ = "-v";
 for (; VAR_4 != ((void*)0); VAR_4 = VAR_4->n_flink)
  if ((VAR_4->n_type & VAR_0) == 0)
   *VAR_2++ = VAR_4->n_name;
 *VAR_2 = ((void*)0);
 return (VAR_3);
}
