
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * scp_data; int scp_data_len; } ;
struct ipl_parameter_block {TYPE_1__ fcp; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,size_t) ;
 size_t FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *,int ) ;
 char FUNC_5 (int ) ;

__attribute__((used)) static size_t FUNC_6(char *VAR_0, size_t VAR_1,
       const struct ipl_parameter_block *VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_1 - 1, FUNC_4(VAR_2->fcp.scp_data,
          VAR_2->fcp.scp_data_len));
 if (!VAR_3)
  goto out;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (!FUNC_0(VAR_2->fcp.scp_data[VAR_4])) {
   VAR_3 = 0;
   goto out;
  }
  if (!VAR_5 && FUNC_1(VAR_2->fcp.scp_data[VAR_4]))
   VAR_5 = 1;
 }

 if (VAR_5)
  FUNC_2(VAR_0, VAR_2->fcp.scp_data, VAR_3);
 else
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   VAR_0[VAR_4] = FUNC_5(VAR_2->fcp.scp_data[VAR_4]);
out:
 VAR_0[VAR_3] = '\0';
 return VAR_3;
}
