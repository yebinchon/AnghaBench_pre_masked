
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {int dummy; } ;
struct aldap {int msgid; int err; int ber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,struct ber_element*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct ber_element* FUNC_1 (int *) ;
 int FUNC_2 (struct ber_element*) ;
 struct ber_element* FUNC_3 (struct ber_element*,char*,int,int ,unsigned long,int ,char*,char*,int ,unsigned long) ;
 int FUNC_4 (int *,struct ber_element*) ;

int
FUNC_5(struct aldap *VAR_6, char *VAR_7, char *VAR_8)
{
 struct ber_element *VAR_9 = ((void*)0), *VAR_10;
 int VAR_11;

 if (VAR_7 == ((void*)0))
  VAR_7 = "";
 if (VAR_8 == ((void*)0))
  VAR_8 = "";

 if ((VAR_9 = FUNC_1(((void*)0))) == ((void*)0))
  goto fail;

 VAR_10 = FUNC_3(VAR_9, "d{tdsst", ++VAR_6->msgid, VAR_1,
     (unsigned long)VAR_4, VAR_5, VAR_7, VAR_8,
     VAR_2, (unsigned long)VAR_3);
 if (VAR_10 == ((void*)0))
  goto fail;

 FUNC_0("aldap_bind", VAR_9);

 VAR_11 = FUNC_4(&VAR_6->ber, VAR_9);
 FUNC_2(VAR_9);
 VAR_9 = ((void*)0);
 if (VAR_11 == -1)
  goto fail;

 return (VAR_6->msgid);
fail:
 if (VAR_9 != ((void*)0))
  FUNC_2(VAR_9);

 VAR_6->err = VAR_0;
 return (-1);
}
