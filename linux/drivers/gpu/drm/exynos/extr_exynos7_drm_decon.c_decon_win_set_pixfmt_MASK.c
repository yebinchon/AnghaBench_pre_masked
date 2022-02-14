
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {int* pitches; int width; TYPE_1__* format; } ;
struct decon_context {scalar_t__ regs; int dev; } ;
struct TYPE_2__ {int format; int* cpp; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct decon_context *VAR_16, unsigned int VAR_17,
     struct drm_framebuffer *VAR_18)
{
 unsigned long VAR_19;
 int VAR_20;

 VAR_19 = FUNC_2(VAR_16->regs + FUNC_1(VAR_17));
 VAR_19 &= ~VAR_12;

 switch (VAR_18->format->format) {
 case 132:
  VAR_19 |= VAR_3;
  VAR_19 |= VAR_13;
  break;
 case 128:
  VAR_19 |= VAR_7;
  VAR_19 |= VAR_13;
  break;
 case 129:
  VAR_19 |= VAR_6;
  VAR_19 |= VAR_13;
  break;
 case 130:
  VAR_19 |= VAR_5;
  VAR_19 |= VAR_13;
  break;
 case 133:
  VAR_19 |= VAR_4;
  VAR_19 |= VAR_13;
  break;
 case 135:
  VAR_19 |= VAR_9 | VAR_2 |
   VAR_1;
  VAR_19 |= VAR_13;
  break;
 case 136:
  VAR_19 |= VAR_8 | VAR_2 |
   VAR_1;
  VAR_19 |= VAR_13;
  break;
 case 131:
  VAR_19 |= VAR_11 | VAR_2 |
   VAR_1;
  VAR_19 |= VAR_13;
  break;
 case 134:
 default:
  VAR_19 |= VAR_10 | VAR_2 |
   VAR_1;
  VAR_19 |= VAR_13;
  break;
 }

 FUNC_0(VAR_16->dev, "cpp = %d\n", VAR_18->format->cpp[0]);
 VAR_20 = (VAR_18->pitches[0] / VAR_18->format->cpp[0]) - VAR_18->width;
 if (VAR_18->width + VAR_20 < VAR_0) {
  VAR_19 &= ~VAR_15;
  VAR_19 |= VAR_14;
 }

 FUNC_3(VAR_19, VAR_16->regs + FUNC_1(VAR_17));
}
