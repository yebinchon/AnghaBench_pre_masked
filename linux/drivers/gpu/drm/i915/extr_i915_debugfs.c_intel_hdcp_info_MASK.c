
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct intel_connector {int dummy; } ;


 int FUNC_0 (struct intel_connector*) ;
 int FUNC_1 (struct intel_connector*) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0,
       struct intel_connector *VAR_1)
{
 bool VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_0, "HDCP1.4 ");
 if (VAR_3)
  FUNC_2(VAR_0, "HDCP2.2 ");

 if (!VAR_2 && !VAR_3)
  FUNC_2(VAR_0, "None");

 FUNC_2(VAR_0, "\n");
}
