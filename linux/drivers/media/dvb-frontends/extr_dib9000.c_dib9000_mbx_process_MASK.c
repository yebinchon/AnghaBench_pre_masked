
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int mbx_lock; int fw_is_running; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;


 scalar_t__ FUNC_0 (struct dib9000_state*,int,int ) ;
 int FUNC_1 (struct dib9000_state*,int ) ;
 int FUNC_2 (struct dib9000_state*,int,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dib9000_state *VAR_0, u16 VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_0->platform.risc.fw_is_running)
  return -1;

 if (FUNC_4(&VAR_0->platform.risc.mbx_lock) < 0) {
  FUNC_3("could not get the lock\n");
  return -1;
 }

 if (FUNC_0(VAR_0, 1, VAR_1))
  VAR_2 = FUNC_1(VAR_0, VAR_1);

 FUNC_2(VAR_0, 1229, VAR_1);


 FUNC_5(&VAR_0->platform.risc.mbx_lock);

 return VAR_2;
}
