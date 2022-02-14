
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {int dummy; } ;
struct aldap {int msgid; int err; int ber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct ber_element*) ;
 int VAR_2 ;
 struct ber_element* FUNC_1 (int *) ;
 int FUNC_2 (struct ber_element*) ;
 struct ber_element* FUNC_3 (struct ber_element*,char*,int,int ,int ) ;
 int FUNC_4 (int *,struct ber_element*) ;

int
FUNC_5(struct aldap *VAR_3)
{
 struct ber_element *VAR_4 = ((void*)0), *VAR_5;
 int VAR_6;

 if ((VAR_4 = FUNC_1(((void*)0))) == ((void*)0))
  goto fail;
 VAR_5 = FUNC_3(VAR_4, "d{t", ++VAR_3->msgid, VAR_1,
     VAR_2);
 if (VAR_5 == ((void*)0))
  goto fail;

 FUNC_0("aldap_unbind", VAR_4);

 VAR_6 = FUNC_4(&VAR_3->ber, VAR_4);
 FUNC_2(VAR_4);
 VAR_4 = ((void*)0);
 if (VAR_6 == -1)
  goto fail;

 return (VAR_3->msgid);
fail:
 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_4);

 VAR_3->err = VAR_0;

 return (-1);
}
