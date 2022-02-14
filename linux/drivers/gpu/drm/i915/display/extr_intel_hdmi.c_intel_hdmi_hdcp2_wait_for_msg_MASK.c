
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_digital_port {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct intel_digital_port*,int ,int*,int*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct intel_digital_port *VAR_0,
         u8 VAR_1, bool VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4, VAR_5;
 ssize_t VAR_6 = 0;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = FUNC_1(VAR_5 = FUNC_3(VAR_0,
            VAR_1, &VAR_3,
            &VAR_6),
    !VAR_5 && VAR_3 && VAR_6, VAR_4 * 1000,
    1000, 5 * 1000);
 if (VAR_5)
  FUNC_0("msg_id: %d, ret: %d, timeout: %d\n",
         VAR_1, VAR_5, VAR_4);

 return VAR_5 ? VAR_5 : VAR_6;
}
