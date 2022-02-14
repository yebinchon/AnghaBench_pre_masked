
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyprintk_port {int port_write_mutex; } ;
struct tty_struct {struct ttyprintk_port* driver_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char const*,int) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0,
  const unsigned char *VAR_1, int VAR_2)
{
 struct ttyprintk_port *VAR_3 = VAR_0->driver_data;
 int VAR_4;



 FUNC_0(&VAR_3->port_write_mutex);
 VAR_4 = FUNC_2(VAR_1, VAR_2);
 FUNC_1(&VAR_3->port_write_mutex);

 return VAR_4;
}
