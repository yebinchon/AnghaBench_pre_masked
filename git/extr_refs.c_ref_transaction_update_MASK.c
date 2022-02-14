
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (struct object_id const*) ;
 int FUNC_5 (struct ref_transaction*,char const*,unsigned int,struct object_id const*,struct object_id const*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (struct strbuf*,int ,char const*) ;

int FUNC_8(struct ref_transaction *VAR_4,
      const char *VAR_5,
      const struct object_id *VAR_6,
      const struct object_id *VAR_7,
      unsigned int VAR_8, const char *VAR_9,
      struct strbuf *VAR_10)
{
 FUNC_2(VAR_10);

 if ((VAR_6 && !FUNC_4(VAR_6)) ?
     FUNC_3(VAR_5, VAR_0) :
     !FUNC_6(VAR_5)) {
  FUNC_7(VAR_10, FUNC_1("refusing to update ref with bad name '%s'"),
       VAR_5);
  return -1;
 }

 if (VAR_8 & ~VAR_3)
  FUNC_0("illegal flags 0x%x passed to ref_transaction_update()", VAR_8);

 VAR_8 |= (VAR_6 ? VAR_1 : 0) | (VAR_7 ? VAR_2 : 0);

 FUNC_5(VAR_4, VAR_5, VAR_8,
       VAR_6, VAR_7, VAR_9);
 return 0;
}
