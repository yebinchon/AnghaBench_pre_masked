
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
typedef scalar_t__ imgType_t ;
typedef int imgFlags_t ;
typedef int byte ;
struct TYPE_4__ {int swizzleNormalmap; scalar_t__ framebufferObject; } ;
struct TYPE_3__ {scalar_t__ integer; } ;
typedef int GLuint ;
typedef scalar_t__ GLenum ;


 int FUNC_0 (int,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *,int,int,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int ,int,int,int,int,int,int *) ;
 TYPE_2__ VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,scalar_t__,int,int,int,int,int,scalar_t__,int,int *) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,int,int,int,int,int,scalar_t__,scalar_t__,int *) ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static void FUNC_10(GLuint VAR_13, byte *VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18, GLenum VAR_19, GLenum VAR_20, int VAR_21, GLenum VAR_22, imgType_t VAR_23, imgFlags_t VAR_24, qboolean VAR_25 )
{
 GLenum VAR_26, VAR_27;
 qboolean VAR_28 = VAR_22 == VAR_0;
 qboolean VAR_29 = VAR_20 == VAR_2 || VAR_20 == VAR_3;
 qboolean VAR_30 = VAR_29 || VAR_20 == VAR_1;
 qboolean VAR_31 = !!(VAR_24 & VAR_6);
 int VAR_32, VAR_33;
 qboolean VAR_34 = VAR_11;

 VAR_26 = FUNC_2(VAR_22);
 VAR_27 = VAR_20 == VAR_1 ? VAR_5 : VAR_4;

 VAR_33 = 0;
 do
 {
  VAR_34 = (VAR_17 == 1 && VAR_18 == 1) || !VAR_31;
  VAR_32 = FUNC_0(VAR_17, VAR_18, VAR_20);

  if (!VAR_30)
  {
   FUNC_7(VAR_13, VAR_19, VAR_33, VAR_15, VAR_16, VAR_17, VAR_18, VAR_20, VAR_32, VAR_14);
  }
  else
  {
   if (VAR_29 && VAR_33 != 0 && VAR_12->integer)
    FUNC_3((byte *)VAR_14, VAR_17 * VAR_18, VAR_10[VAR_33]);

   if (VAR_29 && VAR_28)
    FUNC_6(VAR_13, VAR_33, VAR_15, VAR_16, VAR_17, VAR_18, VAR_14);
   else
    FUNC_9(VAR_13, VAR_19, VAR_33, VAR_15, VAR_16, VAR_17, VAR_18, VAR_26, VAR_27, VAR_14);
  }

  if (!VAR_34 && VAR_21 < 2)
  {
   if (VAR_9.framebufferObject)
   {
    FUNC_8(VAR_13, VAR_19);
    break;
   }
   else if (VAR_29)
   {
    if (VAR_23 == VAR_7 || VAR_23 == VAR_8)
     FUNC_4(VAR_14, VAR_14, VAR_17, VAR_18, VAR_9.swizzleNormalmap);
    else
     FUNC_5(VAR_14, VAR_17, VAR_18);
   }
  }

  VAR_15 >>= 1;
  VAR_16 >>= 1;
  VAR_17 = FUNC_1(1, VAR_17 >> 1);
  VAR_18 = FUNC_1(1, VAR_18 >> 1);
  VAR_33++;

  if (VAR_21 > 1)
  {
   VAR_14 += VAR_32;
   VAR_21--;
  }
 }
 while (!VAR_34);
}
