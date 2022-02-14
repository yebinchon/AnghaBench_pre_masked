
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct oaktrail_hdmi_clock {int np; int nr; int nf; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_7__ {int min; int max; } ;
struct TYPE_6__ {int min; int max; } ;
struct TYPE_5__ {int min; int max; } ;
struct TYPE_8__ {TYPE_3__ nr; TYPE_2__ np; TYPE_1__ vco; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int,int) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1, int VAR_2,
    int VAR_3, struct oaktrail_hdmi_clock *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_5 = FUNC_1(VAR_0.vco.min, VAR_2 * 10);
 VAR_6 = VAR_0.vco.max / (VAR_2 * 10);
 if (VAR_5 < VAR_0.np.min)
  VAR_5 = VAR_0.np.min;
 if (VAR_6 > VAR_0.np.max)
  VAR_6 = VAR_0.np.max;

 VAR_7 = FUNC_1((VAR_3 * 1000), (VAR_2 * 10 * VAR_6));
 VAR_8 = FUNC_1((VAR_3 * 1000), (VAR_2 * 10 * VAR_5));
 if (VAR_7 < VAR_0.nr.min)
  VAR_7 = VAR_0.nr.min;
 if (VAR_8 > VAR_0.nr.max)
  VAR_8 = VAR_0.nr.max;

 VAR_9 = FUNC_1((VAR_3 * 1000), (VAR_2 * 10 * VAR_8));
 VAR_10 = FUNC_1((VAR_3 * 1000), (VAR_2 * 10 * VAR_9));
 VAR_11 = FUNC_0((VAR_2 * 10 * VAR_9 * VAR_10), VAR_3);
 FUNC_2("np, nr, nf %d %d %d\n", VAR_9, VAR_10, VAR_11);





 VAR_4->np = VAR_9;
 VAR_4->nr = VAR_10 - 1;
 VAR_4->nf = (VAR_11 << 14);
}
