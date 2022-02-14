
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drxd_state {scalar_t__ drxd_state; scalar_t__ cscd_state; scalar_t__ type_A; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct drxd_state*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct drxd_state*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct drxd_state*) ;
 int FUNC_3 (struct drxd_state*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct drxd_state *VAR_13)
{
 int VAR_14;

 if (VAR_13->drxd_state != VAR_7)
  return 0;

 do {
  if (VAR_13->cscd_state != VAR_6) {
   u32 VAR_15;
   VAR_14 = FUNC_1(VAR_13, &VAR_15);
   if (VAR_14 < 0)
    break;
  }

  VAR_14 = FUNC_2(VAR_13);
  if (VAR_14 < 0)
   break;

  VAR_13->drxd_state = VAR_8;

  VAR_14 = FUNC_0(VAR_13, 0);
  if (VAR_14 < 0)
   break;

  if (VAR_13->type_A) {

   VAR_14 = FUNC_3(VAR_13, VAR_9, 0x0000, 0x0000);
   if (VAR_14 < 0)
    break;

   VAR_14 = FUNC_3(VAR_13, VAR_12, VAR_11, 0);
   if (VAR_14 < 0)
    break;
   VAR_14 = FUNC_3(VAR_13, VAR_10, VAR_11, 0);
   if (VAR_14 < 0)
    break;
  } else {

   VAR_14 = FUNC_3(VAR_13, VAR_5, VAR_11, 0);
   if (VAR_14 < 0)
    break;
   VAR_14 = FUNC_3(VAR_13, VAR_4, VAR_11, 0);
   if (VAR_14 < 0)
    break;
   VAR_14 = FUNC_3(VAR_13, VAR_3, VAR_11, 0);
   if (VAR_14 < 0)
    break;
   VAR_14 = FUNC_3(VAR_13, VAR_1, VAR_11, 0);
   if (VAR_14 < 0)
    break;
   VAR_14 = FUNC_3(VAR_13, VAR_0, VAR_11, 0);
   if (VAR_14 < 0)
    break;
   VAR_14 = FUNC_3(VAR_13, VAR_2, VAR_11, 0);
   if (VAR_14 < 0)
    break;
   VAR_14 = FUNC_3(VAR_13, VAR_9, 0x0000, 0);
   if (VAR_14 < 0)
    break;
  }

 } while (0);
 return VAR_14;
}
