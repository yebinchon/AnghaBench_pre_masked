
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fixed31_32 {int dummy; } ;
struct dc_stream_state {TYPE_1__* link; } ;
struct TYPE_2__ {int cur_link_settings; } ;


 struct fixed31_32 FUNC_0 (struct fixed31_32,int) ;
 struct fixed31_32 FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static struct fixed31_32 FUNC_3(struct dc_stream_state *VAR_0)
{
 struct fixed31_32 VAR_1;
 uint32_t VAR_2 = FUNC_2(VAR_0->link,
   &VAR_0->link->cur_link_settings);
 VAR_2 /= 8000;

 VAR_1 = FUNC_1(VAR_2);

 return FUNC_0(VAR_1, 54);
}
