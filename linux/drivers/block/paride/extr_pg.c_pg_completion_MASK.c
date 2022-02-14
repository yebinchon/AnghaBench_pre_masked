
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int pi; scalar_t__ dlen; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pg*,int ,int,unsigned long,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int ,char*,int) ;
 int FUNC_5 (struct pg*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct pg *VAR_5, char *VAR_6, unsigned long VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_0(VAR_5, VAR_0, VAR_1 | VAR_3 | VAR_2,
      VAR_7, "completion");

 VAR_5->dlen = 0;

 while (FUNC_5(VAR_5, 7) & VAR_1) {
  VAR_9 = (FUNC_5(VAR_5, 4) + 256 * FUNC_5(VAR_5, 5));
  VAR_10 = ((VAR_9 + 3) & 0xfffc);
  VAR_11 = FUNC_5(VAR_5, 2) & 3;
  if (VAR_11 == 0)
   FUNC_3(VAR_5->pi, VAR_6, VAR_10);
  if (VAR_11 == 2)
   FUNC_2(VAR_5->pi, VAR_6, VAR_10);
  if (VAR_4 > 1)
   FUNC_4("%s: %s %d bytes\n", VAR_5->name,
          VAR_11 ? "Read" : "Write", VAR_10);
  VAR_5->dlen += (1 - VAR_11) * VAR_9;
  VAR_6 += VAR_9;
  VAR_8 = FUNC_0(VAR_5, VAR_0, VAR_1 | VAR_3 | VAR_2,
       VAR_7, "completion");
 }

 FUNC_1(VAR_5->pi);

 return VAR_8;
}
