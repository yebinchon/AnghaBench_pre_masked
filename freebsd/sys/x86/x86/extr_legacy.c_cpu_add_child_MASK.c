
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct pcpu {int * pc_device; } ;
struct cpu_device {struct pcpu* cd_pcpu; int cd_rl; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cpu_device*) ;
 int FUNC_3 (struct cpu_device*,int ) ;
 struct cpu_device* FUNC_4 (int,int ,int) ;
 struct pcpu* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static device_t
FUNC_7(device_t VAR_3, u_int VAR_4, const char *VAR_5, int VAR_6)
{
 struct cpu_device *VAR_7;
 device_t VAR_8;
 struct pcpu *VAR_9;

 if ((VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_0, VAR_1 | VAR_2)) == ((void*)0))
  return (((void*)0));

 FUNC_6(&VAR_7->cd_rl);
 VAR_9 = FUNC_5(FUNC_1(VAR_3));
 VAR_7->cd_pcpu = VAR_9;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 != ((void*)0)) {
  VAR_9->pc_device = VAR_8;
  FUNC_2(VAR_8, VAR_7);
 } else
  FUNC_3(VAR_7, VAR_0);
 return (VAR_8);
}
