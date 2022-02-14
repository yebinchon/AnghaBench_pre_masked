
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dc_init_data {int dummy; } ;
struct TYPE_8__ {int dmcu_version; int dc_ver; } ;
struct TYPE_7__ {int linear_pitch_alignment; int max_audios; int max_links; int max_streams; } ;
struct TYPE_6__ {int (* init_hw ) (struct dc*) ;} ;
struct dc {int build_id; TYPE_5__* res_pool; TYPE_3__ versions; TYPE_2__ caps; int link_count; TYPE_1__ hwss; } ;
struct TYPE_10__ {unsigned int pipe_count; scalar_t__ underlay_pipe_index; TYPE_4__* dmcu; int audio_count; int stream_enc_count; } ;
struct TYPE_9__ {int dmcu_version; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct dc*,struct dc_init_data const*) ;
 int FUNC_2 (struct dc*) ;
 struct dc* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct dc*) ;

struct dc *FUNC_6(const struct dc_init_data *VAR_4)
{
 struct dc *VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 unsigned int VAR_6;

 if (((void*)0) == VAR_5)
  goto alloc_fail;

 if (0 == FUNC_1(VAR_5, VAR_4))
  goto construct_fail;


 VAR_5->hwss.init_hw(VAR_5);

 VAR_6 = VAR_5->res_pool->pipe_count;
 if (VAR_5->res_pool->underlay_pipe_index != VAR_3)
  VAR_6--;
 VAR_5->caps.max_streams = FUNC_4(
   VAR_6,
   VAR_5->res_pool->stream_enc_count);

 VAR_5->caps.max_links = VAR_5->link_count;
 VAR_5->caps.max_audios = VAR_5->res_pool->audio_count;
 VAR_5->caps.linear_pitch_alignment = 64;


 VAR_5->versions.dc_ver = VAR_1;

 if (VAR_5->res_pool->dmcu != ((void*)0))
  VAR_5->versions.dmcu_version = VAR_5->res_pool->dmcu->dmcu_version;

 VAR_5->build_id = VAR_0;

 FUNC_0("Display Core initialized\n");



 return VAR_5;

construct_fail:
 FUNC_2(VAR_5);

alloc_fail:
 return ((void*)0);
}
