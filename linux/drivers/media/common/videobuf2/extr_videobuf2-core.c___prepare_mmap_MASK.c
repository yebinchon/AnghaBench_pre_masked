
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int planes; int vb2_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct vb2_buffer*,int ) ;
 int FUNC_1 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct vb2_buffer *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_2->vb2_queue, VAR_1,
    VAR_2, VAR_2->planes);
 return VAR_3 ? VAR_3 : FUNC_1(VAR_2, VAR_0, VAR_2);
}
