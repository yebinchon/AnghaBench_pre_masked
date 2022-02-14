
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {TYPE_2__* planes; int index; int vb2_queue; } ;
struct dvb_vb2_ctx {int name; } ;
struct dmx_buffer {int offset; int bytesused; int length; int index; } ;
struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {TYPE_1__ m; int bytesused; int length; } ;


 int FUNC_0 (int,char*,int ) ;
 struct dvb_vb2_ctx* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vb2_buffer *VAR_0, void *VAR_1)
{
 struct dvb_vb2_ctx *VAR_2 = FUNC_1(VAR_0->vb2_queue);
 struct dmx_buffer *VAR_3 = VAR_1;

 VAR_3->index = VAR_0->index;
 VAR_3->length = VAR_0->planes[0].length;
 VAR_3->bytesused = VAR_0->planes[0].bytesused;
 VAR_3->offset = VAR_0->planes[0].m.offset;
 FUNC_0(3, "[%s]\n", VAR_2->name);
}
