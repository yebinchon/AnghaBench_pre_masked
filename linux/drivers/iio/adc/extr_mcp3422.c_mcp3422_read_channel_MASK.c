
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mcp3422 {size_t config; int * pga; } ;
struct iio_chan_spec {size_t channel; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_1 ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (struct mcp3422*,int*,size_t*) ;
 int * VAR_2 ;
 int FUNC_5 (struct mcp3422*,size_t) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mcp3422 *VAR_3,
    struct iio_chan_spec const *VAR_4, int *VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 u8 VAR_8 = VAR_4->channel;

 if (VAR_8 != FUNC_0(VAR_3->config)) {
  VAR_7 = VAR_3->config;
  VAR_7 &= ~VAR_0;
  VAR_7 |= FUNC_1(VAR_8);
  VAR_7 &= ~VAR_1;
  VAR_7 |= FUNC_2(VAR_3->pga[VAR_8]);
  VAR_6 = FUNC_5(VAR_3, VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_6(VAR_2[FUNC_3(VAR_3->config)]);
 }

 return FUNC_4(VAR_3, VAR_5, &VAR_7);
}
