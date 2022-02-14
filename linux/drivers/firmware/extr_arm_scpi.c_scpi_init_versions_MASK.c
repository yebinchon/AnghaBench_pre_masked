
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scpi_drvinfo {void* firmware_version; void* protocol_version; } ;
struct scp_capabilities {int platform_version; int protocol_version; } ;
typedef int caps ;
struct TYPE_2__ {scalar_t__ is_legacy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int *,int ,struct scp_capabilities*,int) ;

__attribute__((used)) static int FUNC_2(struct scpi_drvinfo *VAR_3)
{
 int VAR_4;
 struct scp_capabilities VAR_5;

 VAR_4 = FUNC_1(VAR_0, ((void*)0), 0,
    &VAR_5, sizeof(VAR_5));
 if (!VAR_4) {
  VAR_3->protocol_version = FUNC_0(VAR_5.protocol_version);
  VAR_3->firmware_version = FUNC_0(VAR_5.platform_version);
 }

 if (VAR_2->is_legacy && VAR_4 == -VAR_1)
  return 0;

 return VAR_4;
}
