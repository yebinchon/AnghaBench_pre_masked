
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tentry_info {scalar_t__ subtype; } ;
struct ta_buf_fhash {struct fhashentry* ent_ptr; } ;
struct ip_fw_chain {int dummy; } ;
struct fhashentry6 {int dummy; } ;
struct fhashentry4 {int dummy; } ;
struct fhashentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fhashentry*,int ) ;
 struct fhashentry* FUNC_1 (size_t,int ,int) ;
 int FUNC_2 (struct tentry_info*,struct fhashentry*) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_6, struct tentry_info *VAR_7,
    void *VAR_8)
{
 struct ta_buf_fhash *VAR_9;
 struct fhashentry *VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_9 = (struct ta_buf_fhash *)VAR_8;

 if (VAR_7->subtype == VAR_0)
  VAR_11 = sizeof(struct fhashentry4);
 else if (VAR_7->subtype == VAR_1)
  VAR_11 = sizeof(struct fhashentry6);
 else
  return (VAR_2);

 VAR_10 = FUNC_1(VAR_11, VAR_3, VAR_4 | VAR_5);

 VAR_12 = FUNC_2(VAR_7, VAR_10);
 if (VAR_12 != 0) {
  FUNC_0(VAR_10, VAR_3);
  return (VAR_12);
 }
 VAR_9->ent_ptr = VAR_10;

 return (0);
}
