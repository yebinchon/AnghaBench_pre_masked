
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idma64_hw_desc {int llp; } ;
struct idma64_desc {struct idma64_hw_desc* hw; } ;
struct idma64_chan {int mask; struct idma64_desc* desc; } ;
struct idma64 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct idma64*,int ,int ) ;
 int FUNC_2 (struct idma64_chan*,int ,int) ;
 int FUNC_3 (struct idma64_chan*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct idma64 *VAR_8, struct idma64_chan *VAR_9)
{
 struct idma64_desc *VAR_10 = VAR_9->desc;
 struct idma64_hw_desc *VAR_11 = &VAR_10->hw[0];

 FUNC_3(VAR_9, VAR_7, 0);
 FUNC_3(VAR_9, VAR_3, 0);

 FUNC_2(VAR_9, VAR_1, FUNC_0(~0UL));
 FUNC_2(VAR_9, VAR_2, VAR_5 | VAR_4);

 FUNC_3(VAR_9, VAR_6, VAR_11->llp);

 FUNC_1(VAR_8, VAR_0, VAR_9->mask);
}
