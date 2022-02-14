
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcilynx {int client_list_lock; } ;
struct inode {int dummy; } ;
struct file {struct client* private_data; } ;
struct client {int buffer; int link; struct pcilynx* lynx; } ;


 int FUNC_0 (struct client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcilynx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct client *VAR_2 = VAR_1->private_data;
 struct pcilynx *VAR_3 = VAR_2->lynx;

 FUNC_4(&VAR_3->client_list_lock);
 FUNC_1(&VAR_2->link);
 FUNC_5(&VAR_3->client_list_lock);

 FUNC_3(&VAR_2->buffer);
 FUNC_0(VAR_2);
 FUNC_2(VAR_3);

 return 0;
}
