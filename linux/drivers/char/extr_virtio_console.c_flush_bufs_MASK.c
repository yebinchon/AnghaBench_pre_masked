
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct port_buffer {int dummy; } ;


 int FUNC_0 (struct port_buffer*,int) ;
 struct port_buffer* FUNC_1 (struct virtqueue*,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct virtqueue *VAR_0, bool VAR_1)
{
 struct port_buffer *VAR_2;
 unsigned int VAR_3;

 while ((VAR_2 = FUNC_1(VAR_0, &VAR_3)))
  FUNC_0(VAR_2, VAR_1);
}
