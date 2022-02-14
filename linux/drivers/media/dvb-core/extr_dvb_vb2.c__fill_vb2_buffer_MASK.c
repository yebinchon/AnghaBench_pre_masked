
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_plane {scalar_t__ bytesused; } ;
struct vb2_buffer {int vb2_queue; } ;
struct dvb_vb2_ctx {int name; } ;


 int FUNC_0 (int,char*,int ) ;
 struct dvb_vb2_ctx* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vb2_buffer *VAR_0, struct vb2_plane *VAR_1)
{
 struct dvb_vb2_ctx *VAR_2 = FUNC_1(VAR_0->vb2_queue);

 VAR_1[0].bytesused = 0;
 FUNC_0(3, "[%s]\n", VAR_2->name);

 return 0;
}
