
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct st_clk_data {scalar_t__ base; } ;
struct platform_device {int dev; } ;
struct TYPE_6__ {int clk; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 TYPE_1__* FUNC_1 (int *,char*,int *,int ,int) ;
 TYPE_1__* FUNC_2 (int *,char*,char*,int ,scalar_t__,int ,int ,int *) ;
 TYPE_1__* FUNC_3 (int *,char*,int ,int ,int ,scalar_t__,int ,int,int ,int *) ;
 int VAR_10 ;
 int FUNC_4 (int ,int ) ;
 struct st_clk_data* FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*,char*,int *) ;
 TYPE_1__** VAR_11 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_12)
{
 struct st_clk_data *VAR_13;

 VAR_13 = FUNC_5(&VAR_12->dev);
 if (!VAR_13 || !VAR_13->base)
  return -VAR_2;

 VAR_11[VAR_7] = FUNC_1(((void*)0), "clk48MHz", ((void*)0), 0,
           48000000);
 VAR_11[VAR_6] = FUNC_1(((void*)0), "clk25MHz", ((void*)0), 0,
           25000000);

 VAR_11[VAR_9] = FUNC_3(((void*)0), "oscout1_mux",
  VAR_10, FUNC_0(VAR_10),
  0, VAR_13->base + VAR_0, VAR_5, 3, 0, ((void*)0));

 FUNC_4(VAR_11[VAR_9]->clk, VAR_11[VAR_7]->clk);

 VAR_11[VAR_8] = FUNC_2(((void*)0), "oscout1", "oscout1_mux",
  0, VAR_13->base + VAR_3, VAR_4,
  VAR_1, ((void*)0));

 FUNC_6(&VAR_12->dev, VAR_11[VAR_8], "oscout1",
        ((void*)0));

 return 0;
}
