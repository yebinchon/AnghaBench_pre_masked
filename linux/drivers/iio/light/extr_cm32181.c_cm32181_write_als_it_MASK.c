
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
struct cm32181_chip {int lock; int * conf_regs; struct i2c_client* client; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (struct i2c_client*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cm32181_chip *VAR_5, int VAR_6)
{
 struct i2c_client *VAR_7 = VAR_5->client;
 u16 VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_11 = FUNC_0(VAR_4);
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  if (VAR_6 <= VAR_4[VAR_10])
   break;
 if (VAR_10 >= VAR_11)
  VAR_10 = VAR_11 - 1;

 VAR_8 = VAR_3[VAR_10];
 VAR_8 <<= VAR_1;

 FUNC_2(&VAR_5->lock);
 VAR_5->conf_regs[VAR_2] &=
  ~VAR_0;
 VAR_5->conf_regs[VAR_2] |=
  VAR_8;
 VAR_9 = FUNC_1(VAR_7, VAR_2,
   VAR_5->conf_regs[VAR_2]);
 FUNC_3(&VAR_5->lock);

 return VAR_9;
}
