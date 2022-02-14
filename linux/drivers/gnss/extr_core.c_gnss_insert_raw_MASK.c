
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnss_device {int read_queue; int read_fifo; } ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct gnss_device *VAR_0, const unsigned char *VAR_1,
    size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->read_fifo, VAR_1, VAR_2);

 FUNC_1(&VAR_0->read_queue);

 return VAR_3;
}
