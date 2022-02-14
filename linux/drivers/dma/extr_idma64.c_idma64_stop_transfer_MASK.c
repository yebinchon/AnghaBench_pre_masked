
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ chan; } ;
struct idma64_chan {TYPE_2__ vchan; } ;
struct idma64 {int dummy; } ;


 int FUNC_0 (struct idma64*,struct idma64_chan*) ;
 struct idma64* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct idma64_chan *VAR_0)
{
 struct idma64 *VAR_1 = FUNC_1(VAR_0->vchan.chan.device);

 FUNC_0(VAR_1, VAR_0);
}
