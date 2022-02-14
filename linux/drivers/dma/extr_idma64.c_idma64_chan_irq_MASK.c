
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct idma64_desc {scalar_t__ status; int vdesc; } ;
struct TYPE_2__ {int lock; } ;
struct idma64_chan {TYPE_1__ vchan; struct idma64_desc* desc; int mask; } ;
struct idma64 {struct idma64_chan* chan; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct idma64*,int ,int ) ;
 int FUNC_2 (struct idma64_chan*) ;
 int FUNC_3 (struct idma64_chan*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct idma64 *VAR_4, unsigned short VAR_5,
  u32 VAR_6, u32 VAR_7)
{
 struct idma64_chan *VAR_8 = &VAR_4->chan[VAR_5];
 struct idma64_desc *VAR_9;

 FUNC_4(&VAR_8->vchan.lock);
 VAR_9 = VAR_8->desc;
 if (VAR_9) {
  if (VAR_6 & (1 << VAR_5)) {
   FUNC_1(VAR_4, FUNC_0(VAR_2), VAR_8->mask);
   VAR_9->status = VAR_1;
  } else if (VAR_7 & (1 << VAR_5)) {
   FUNC_1(VAR_4, FUNC_0(VAR_3), VAR_8->mask);
   VAR_9->status = VAR_0;
   FUNC_6(&VAR_9->vdesc);
   FUNC_2(VAR_8);
  }


  if (VAR_8->desc == ((void*)0) || VAR_9->status == VAR_1)
   FUNC_3(VAR_8);
 }
 FUNC_5(&VAR_8->vchan.lock);
}
