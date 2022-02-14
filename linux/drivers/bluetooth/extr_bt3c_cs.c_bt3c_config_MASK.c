
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct bt3c_info* priv; } ;
struct bt3c_info {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct bt3c_info*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (struct pcmcia_device*,int ,void*) ;
 int FUNC_5 (struct pcmcia_device*,int *) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_4)
{
 struct bt3c_info *VAR_5 = VAR_4->priv;
 int VAR_6;
 unsigned long VAR_7;




 for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
  if (!FUNC_4(VAR_4, VAR_1, (void *) VAR_7))
   goto found_port;





 if (!FUNC_4(VAR_4, VAR_2, ((void*)0)))
  goto found_port;

 FUNC_0("No usable port range found");
 goto failed;

found_port:
 VAR_6 = FUNC_5(VAR_4, &VAR_3);
 if (VAR_6 != 0)
  goto failed;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 != 0)
  goto failed;

 if (FUNC_1(VAR_5) != 0)
  goto failed;

 return 0;

failed:
 FUNC_2(VAR_4);
 return -VAR_0;
}
