
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdc_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mdc_chan*,int ) ;
 int FUNC_1 (struct mdc_chan*,int,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct mdc_chan *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;

 VAR_7 = FUNC_0(VAR_6, VAR_0);
 VAR_8 = (VAR_7 >> VAR_4) &
    VAR_3;





 do {
  VAR_7 = FUNC_0(VAR_6, VAR_0);

  VAR_9 = (VAR_7 >> VAR_2) &
   VAR_1;

  VAR_7 &= ~((VAR_3 <<
     VAR_4) |
    VAR_5);

  VAR_7 |= VAR_9 << VAR_4;

  FUNC_1(VAR_6, VAR_7, VAR_0);

  VAR_7 = FUNC_0(VAR_6, VAR_0);

  VAR_10 = (VAR_7 >> VAR_2) &
   VAR_1;
 } while (VAR_9 != VAR_10);

 if (VAR_9 >= VAR_8)
  VAR_11 = VAR_9 - VAR_8;
 else
  VAR_11 = ((VAR_3 + 1) -
   VAR_8) + VAR_9;

 return VAR_11;
}
