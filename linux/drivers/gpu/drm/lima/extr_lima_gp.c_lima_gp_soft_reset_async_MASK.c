
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int async_reset; } ;
struct lima_ip {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct lima_ip *VAR_5)
{
 if (VAR_5->data.async_reset)
  return;

 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_2, VAR_4);
 FUNC_0(VAR_0, VAR_1);
 VAR_5->data.async_reset = 1;
}
