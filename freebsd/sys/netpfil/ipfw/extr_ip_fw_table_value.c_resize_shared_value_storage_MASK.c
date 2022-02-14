
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdump_args {struct table_value* pval; } ;
struct tables_config {int val_size; } ;
struct table_value {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {struct table_value* valuestate; } ;
typedef int da ;


 struct tables_config* FUNC_0 (struct ip_fw_chain*) ;
 struct namedobj_instance* FUNC_1 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 int FUNC_5 (struct ip_fw_chain*) ;
 int FUNC_6 (struct ip_fw_chain*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct table_value*,int ) ;
 int FUNC_8 (int,void*,int*) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (struct namedobj_instance*,void**,int*) ;
 int FUNC_11 (struct namedobj_instance*,void**,int*) ;
 int FUNC_12 (struct namedobj_instance*,int ,struct vdump_args*) ;
 struct table_value* FUNC_13 (int,int ,int) ;
 int FUNC_14 (struct table_value*,struct table_value*,int) ;
 int FUNC_15 (struct vdump_args*,int ,int) ;
 int FUNC_16 (struct ip_fw_chain*,struct ip_fw_chain*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_17(struct ip_fw_chain *VAR_5)
{
 struct tables_config *VAR_6;
 struct namedobj_instance *VAR_7;
 struct table_value *VAR_8, *VAR_9, *VAR_10;
 void *VAR_11;
 struct vdump_args VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;

 FUNC_3(VAR_5);

 VAR_9 = ((void*)0);
 VAR_11 = ((void*)0);

 VAR_8 = (struct table_value *)VAR_5->valuestate;
 VAR_7 = FUNC_1(VAR_5);
 VAR_6 = FUNC_0(VAR_5);

 VAR_14 = VAR_6->val_size * 2;

 if (VAR_14 == (1 << 30))
  return (VAR_0);

 FUNC_4(VAR_5);

 VAR_9 = FUNC_13(sizeof(struct table_value) * VAR_14, VAR_1,
     VAR_2 | VAR_3);
 FUNC_8(VAR_14, (void *)&VAR_11,
     &VAR_13);

 FUNC_2(VAR_5);




 if (VAR_6->val_size >= VAR_14)
  goto done;


 VAR_8 = (struct table_value *)VAR_5->valuestate;
 FUNC_16(VAR_5, VAR_5);


 FUNC_14(VAR_9, VAR_8, sizeof(struct table_value) * VAR_6->val_size);
 FUNC_10(FUNC_1(VAR_5), &VAR_11, &VAR_13);

 FUNC_5(VAR_5);

 VAR_10 = VAR_5->valuestate;
 VAR_5->valuestate = VAR_9;
 VAR_9 = VAR_10;
 FUNC_11(FUNC_1(VAR_5), &VAR_11, &VAR_13);

 VAR_15 = VAR_6->val_size;
 VAR_6->val_size = VAR_14;
 VAR_14 = VAR_15;
 FUNC_6(VAR_5);

 FUNC_15(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.pval = (struct table_value *)VAR_5->valuestate;
 FUNC_12(VAR_7, VAR_4, &VAR_12);

done:
 FUNC_7(VAR_9, VAR_1);
 FUNC_9(VAR_11, VAR_13);

 return (0);
}
