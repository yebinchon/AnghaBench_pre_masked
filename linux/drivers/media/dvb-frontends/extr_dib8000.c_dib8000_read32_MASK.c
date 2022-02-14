
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dib8000_state {int i2c_buffer_lock; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u32 FUNC_4(struct dib8000_state *VAR_0, u16 VAR_1)
{
 u16 VAR_2[2];

 if (FUNC_2(&VAR_0->i2c_buffer_lock) < 0) {
  FUNC_1("could not acquire lock\n");
  return 0;
 }

 VAR_2[0] = FUNC_0(VAR_0, VAR_1 + 0);
 VAR_2[1] = FUNC_0(VAR_0, VAR_1 + 1);

 FUNC_3(&VAR_0->i2c_buffer_lock);

 return ((VAR_2[0] << 16) | (VAR_2[1]));
}
