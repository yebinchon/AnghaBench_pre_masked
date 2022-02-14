
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ad7768_state {int mclk_freq; void* samp_freq; } ;
struct TYPE_3__ {int clk_div; int dec_rate; int pwrmode; int mclk_div; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int ,unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_4 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (struct ad7768_state*,int ) ;
 int FUNC_6 (struct ad7768_state*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct ad7768_state *VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_6 = VAR_1;
 VAR_9 = 0;

 VAR_10 = FUNC_3(VAR_3->mclk_freq, VAR_4);


 for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_2); VAR_8++) {
  VAR_5 = FUNC_4(VAR_10 - VAR_2[VAR_8].clk_div);
  if (VAR_5 < VAR_6) {
   VAR_6 = VAR_5;
   VAR_9 = VAR_8;
  }
 }





 VAR_7 = FUNC_0(VAR_2[VAR_9].mclk_div) |
     FUNC_1(VAR_2[VAR_9].pwrmode);
 VAR_11 = FUNC_6(VAR_3, VAR_0, VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_5(VAR_3, VAR_2[VAR_9].dec_rate);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_3->samp_freq = FUNC_3(VAR_3->mclk_freq,
       VAR_2[VAR_9].clk_div);

 return 0;
}
