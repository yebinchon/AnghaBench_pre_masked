
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_policy_node {int dummy; } ;
struct stm_output {int dummy; } ;
struct stm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct stm_device*,unsigned int,struct stp_policy_node*,struct stm_output*) ;
 struct stp_policy_node* FUNC_1 (struct stm_device*,char*) ;
 int FUNC_2 (struct stp_policy_node*) ;

__attribute__((used)) static int
FUNC_3(struct stm_device *VAR_1, struct stm_output *VAR_2,
   char **VAR_3, unsigned int VAR_4)
{
 struct stp_policy_node *VAR_5;
 int VAR_6, VAR_7;







 for (VAR_7 = 0, VAR_5 = ((void*)0); VAR_3[VAR_7] && !VAR_5; VAR_7++)
  VAR_5 = FUNC_1(VAR_1, VAR_3[VAR_7]);

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_5, VAR_2);

 FUNC_2(VAR_5);

 return VAR_6;
}
