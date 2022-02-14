
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sg {int fn; int en; int fi; int ei; int addr; } ;
struct omap_desc {scalar_t__ dir; struct omap_sg* sg; } ;
struct omap_chan {int sgidx; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct omap_chan*,unsigned int,int ) ;
 int FUNC_1 (struct omap_chan*,struct omap_desc*) ;

__attribute__((used)) static void FUNC_2(struct omap_chan *VAR_10, struct omap_desc *VAR_11)
{
 struct omap_sg *VAR_12 = VAR_11->sg + VAR_10->sgidx;
 unsigned VAR_13, VAR_14, VAR_15;

 if (VAR_11->dir == VAR_8 || VAR_11->dir == VAR_9) {
  VAR_13 = VAR_2;
  VAR_14 = VAR_0;
  VAR_15 = VAR_1;
 } else {
  VAR_13 = VAR_7;
  VAR_14 = VAR_5;
  VAR_15 = VAR_6;
 }

 FUNC_0(VAR_10, VAR_13, VAR_12->addr);
 FUNC_0(VAR_10, VAR_14, VAR_12->ei);
 FUNC_0(VAR_10, VAR_15, VAR_12->fi);
 FUNC_0(VAR_10, VAR_3, VAR_12->en);
 FUNC_0(VAR_10, VAR_4, VAR_12->fn);

 FUNC_1(VAR_10, VAR_11);
 VAR_10->sgidx++;
}
