
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cppi41_desc {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct cppi41_dd {scalar_t__ descs_phys; TYPE_1__ ddev; struct cppi41_channel** chan_busy; } ;
struct cppi41_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct cppi41_channel *FUNC_2(struct cppi41_dd *VAR_1, u32 VAR_2)
{
 struct cppi41_channel *VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = sizeof(struct cppi41_desc) * VAR_0;

 if (!((VAR_2 >= VAR_1->descs_phys) &&
   (VAR_2 < (VAR_1->descs_phys + VAR_4)))) {
  return ((void*)0);
 }

 VAR_5 = (VAR_2 - VAR_1->descs_phys) / sizeof(struct cppi41_desc);
 FUNC_0(VAR_5 >= VAR_0);
 VAR_3 = VAR_1->chan_busy[VAR_5];
 VAR_1->chan_busy[VAR_5] = ((void*)0);


 FUNC_1(VAR_1->ddev.dev);

 return VAR_3;
}
