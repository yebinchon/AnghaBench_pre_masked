
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnss_device {int id; int read_fifo; struct gnss_device* write_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gnss_device*) ;
 struct gnss_device* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct gnss_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2->write_buf);
 FUNC_1(&VAR_2->read_fifo);
 FUNC_0(&VAR_0, VAR_2->id);
 FUNC_2(VAR_2);
}
