
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_plane {scalar_t__ dbuf_mapped; int * dbuf; int * mem_priv; } ;
struct vb2_buffer {int dummy; } ;


 int FUNC_0 (struct vb2_buffer*,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct vb2_buffer *VAR_2, struct vb2_plane *VAR_3)
{
 if (!VAR_3->mem_priv)
  return;

 if (VAR_3->dbuf_mapped)
  FUNC_0(VAR_2, VAR_1, VAR_3->mem_priv);

 FUNC_0(VAR_2, VAR_0, VAR_3->mem_priv);
 FUNC_1(VAR_3->dbuf);
 VAR_3->mem_priv = ((void*)0);
 VAR_3->dbuf = ((void*)0);
 VAR_3->dbuf_mapped = 0;
}
