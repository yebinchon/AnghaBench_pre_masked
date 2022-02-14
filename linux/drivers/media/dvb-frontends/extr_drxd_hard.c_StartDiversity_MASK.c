
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int bandwidth_hz; } ;
struct drxd_state {scalar_t__ operation_mode; int m_DiversityDelay6MHZ; int m_DiversityDelay8MHZ; TYPE_1__ props; int m_StartDiversityEnd; int m_StartDiversityFront; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct drxd_state*,int ,int*,int ) ;
 int FUNC_1 (struct drxd_state*,int ,int,int ) ;
 int FUNC_2 (struct drxd_state*,int ) ;

__attribute__((used)) static int FUNC_3(struct drxd_state *VAR_8)
{
 int VAR_9 = 0;
 u16 VAR_10;

 do {
  if (VAR_8->operation_mode == VAR_7) {
   VAR_9 = FUNC_2(VAR_8, VAR_8->m_StartDiversityFront);
   if (VAR_9 < 0)
    break;
  } else if (VAR_8->operation_mode == VAR_6) {
   VAR_9 = FUNC_2(VAR_8, VAR_8->m_StartDiversityEnd);
   if (VAR_9 < 0)
    break;
   if (VAR_8->props.bandwidth_hz == 8000000) {
    VAR_9 = FUNC_2(VAR_8, VAR_8->m_DiversityDelay8MHZ);
    if (VAR_9 < 0)
     break;
   } else {
    VAR_9 = FUNC_2(VAR_8, VAR_8->m_DiversityDelay6MHZ);
    if (VAR_9 < 0)
     break;
   }

   VAR_9 = FUNC_0(VAR_8, VAR_5, &VAR_10, 0);
   if (VAR_9 < 0)
    break;
   VAR_10 &= ~(VAR_1);
   VAR_10 |= VAR_0 |

       VAR_3 |
       VAR_4 |
       VAR_2;
   VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_10, 0);
   if (VAR_9 < 0)
    break;
  }
 } while (0);
 return VAR_9;
}
