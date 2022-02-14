
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dvb {int demux; } ;
struct vb2_buffer {int dummy; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct vb2_buffer*,int ) ;
 int FUNC_2 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_3(struct vb2_buffer *VAR_0, void *VAR_1)
{
 struct vb2_dvb *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->demux, FUNC_2(VAR_0, 0),
          FUNC_1(VAR_0, 0));
 return 0;
}
