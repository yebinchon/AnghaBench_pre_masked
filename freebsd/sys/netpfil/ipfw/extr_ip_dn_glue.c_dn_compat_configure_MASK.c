
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_sch {int dummy; } ;
struct dn_profile {int dummy; } ;
struct dn_pipe8 {scalar_t__ samples_no; } ;
struct dn_pipe7 {int pipe_nr; } ;
struct dn_link {int dummy; } ;
struct dn_id {int id; } ;
struct dn_fs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dn_sch*,struct dn_link*,struct dn_fs*,void*) ;
 int FUNC_1 (struct dn_profile*,struct dn_link*,void*) ;
 int FUNC_2 (struct dn_fs*,void*) ;
 int FUNC_3 (struct dn_id*,int) ;
 int FUNC_4 (struct dn_id*,int ) ;
 int VAR_9 ;
 struct dn_id* FUNC_5 (int,int ,int) ;
 void* FUNC_6 (struct dn_id**,int,int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_10)
{
 struct dn_id *VAR_11 = ((void*)0), *VAR_12;
 struct dn_sch *VAR_13 = ((void*)0);
 struct dn_link *VAR_14 = ((void*)0);
 struct dn_fs *VAR_15 = ((void*)0);
 struct dn_profile *VAR_16 = ((void*)0);
 int VAR_17;
 int VAR_18;

 struct dn_pipe7 *VAR_19 = (struct dn_pipe7 *)VAR_10;
 struct dn_pipe8 *VAR_20 = (struct dn_pipe8 *)VAR_10;

 int VAR_21;

 VAR_17 = sizeof(struct dn_id);
 VAR_17 += sizeof(struct dn_sch) + sizeof(struct dn_link) +
  sizeof(struct dn_fs) + sizeof(struct dn_profile);

 VAR_12 = VAR_11 = FUNC_5(VAR_17, VAR_6, VAR_7|VAR_8);
 FUNC_6(&VAR_11, sizeof(struct dn_id), VAR_1);
 VAR_12->id = VAR_0;


 VAR_21 = VAR_19->pipe_nr;
 if (VAR_21 != 0) {
  VAR_13 = FUNC_6(&VAR_11, sizeof(*VAR_13), VAR_5);
  VAR_14 = FUNC_6(&VAR_11, sizeof(*VAR_14), VAR_3);
  VAR_15 = FUNC_6(&VAR_11, sizeof(*VAR_15), VAR_2);

  VAR_18 = FUNC_0(VAR_13, VAR_14, VAR_15, VAR_10);
  if (VAR_18) {
   FUNC_4(VAR_11, VAR_6);
   return VAR_18;
  }
  if (!VAR_9 && VAR_20->samples_no > 0) {

   VAR_16 = FUNC_6(&VAR_11, sizeof(*VAR_16), VAR_4);
   VAR_18 = FUNC_1(VAR_16, VAR_14, VAR_10);
   if (VAR_18) {
    FUNC_4(VAR_11, VAR_6);
    return VAR_18;
   }
  }
 } else {
  VAR_15 = FUNC_6(&VAR_11, sizeof(*VAR_15), VAR_2);
  VAR_18 = FUNC_2(VAR_15, VAR_10);
  if (VAR_18) {
   FUNC_4(VAR_11, VAR_6);
   return VAR_18;
  }
 }
 VAR_18 = FUNC_3(VAR_12, (char *)VAR_11 - (char *)VAR_12);

 if (VAR_11)
  FUNC_4(VAR_11, VAR_6);
 return VAR_18;
}
