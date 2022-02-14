
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxd_state {int mutex; } ;


 int FUNC_0 (struct drxd_state*,int ,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drxd_state*,int ) ;
 int FUNC_2 (struct drxd_state*) ;
 int FUNC_3 (struct drxd_state*,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct drxd_state *VAR_5,
          u16 VAR_6, u16 VAR_7, u16 VAR_8)
{
 int VAR_9, VAR_10 = 0;
 u16 VAR_11;

 FUNC_4(&VAR_5->mutex);
 do {
  VAR_9 = FUNC_0(VAR_5, VAR_0, &VAR_11, 0);
  if (VAR_9 < 0 || VAR_11 != 1) {
   VAR_10 = -1;
   break;
  }
  FUNC_2(VAR_5);
  VAR_10 |= FUNC_3(VAR_5, VAR_1, VAR_6, 0);
  VAR_10 |= FUNC_3(VAR_5, VAR_4, VAR_8, 0);
  VAR_10 |= FUNC_3(VAR_5, VAR_3, VAR_7, 0);

  FUNC_1(VAR_5, VAR_2);
 } while (0);
 FUNC_5(&VAR_5->mutex);
 return VAR_10;
}
