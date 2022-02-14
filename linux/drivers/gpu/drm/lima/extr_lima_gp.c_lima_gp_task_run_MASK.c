
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_sched_task {struct drm_lima_gp_frame* frame; } ;
struct lima_sched_pipe {struct lima_ip** processor; } ;
struct lima_ip {scalar_t__ iomem; } ;
struct drm_lima_gp_frame {int * frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct lima_ip*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct lima_sched_pipe *VAR_9,
        struct lima_sched_task *VAR_10)
{
 struct lima_ip *VAR_11 = VAR_9->processor[0];
 struct drm_lima_gp_frame *VAR_12 = VAR_10->frame;
 u32 *VAR_13 = VAR_12->frame;
 u32 VAR_14 = 0;
 int VAR_15;

 if (VAR_13[VAR_8 >> 2] !=
     VAR_13[VAR_7 >> 2])
  VAR_14 |= VAR_2;
 if (VAR_13[VAR_6 >> 2] !=
     VAR_13[VAR_5 >> 2])
  VAR_14 |= VAR_1;


 FUNC_1(VAR_11);

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
  FUNC_2(VAR_13[VAR_15], VAR_11->iomem + VAR_8 + VAR_15 * 4);

 FUNC_0(VAR_0, VAR_3);
 FUNC_0(VAR_0, VAR_14);
}
