
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qxl_device {TYPE_1__* client_monitors_config; } ;
struct TYPE_4__ {unsigned int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct qxl_device *VAR_3,
  unsigned int VAR_4)
{
 if (VAR_3->client_monitors_config &&
     VAR_4 > VAR_3->client_monitors_config->count) {
  FUNC_0(VAR_3->client_monitors_config);
  VAR_3->client_monitors_config = ((void*)0);
 }
 if (!VAR_3->client_monitors_config) {
  VAR_3->client_monitors_config = FUNC_1(
    FUNC_2(VAR_3->client_monitors_config,
    VAR_2, VAR_4), VAR_1);
  if (!VAR_3->client_monitors_config)
   return -VAR_0;
 }
 VAR_3->client_monitors_config->count = VAR_4;
 return 0;
}
