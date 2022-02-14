
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int fd; int rid; scalar_t__ ofs; int size; int ptr; int addr; } ;
struct proto_ioc_region {int size; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int,int ,struct proto_ioc_region*) ;
 int FUNC_2 (int *,int ,int,int,int,scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 struct resource* FUNC_5 (int) ;
 int FUNC_6 (char*,int,char*,char const*,char const*) ;

int
FUNC_7(const char *VAR_9, const char *VAR_10)
{
 char VAR_11[VAR_4];
 struct proto_ioc_region VAR_12;
 struct resource *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_6(VAR_11, VAR_4, "/dev/proto/%s/%s", VAR_9, VAR_10);
 if (VAR_14 >= VAR_4) {
  VAR_8 = VAR_0;
  return (-1);
 }
 VAR_15 = FUNC_4();
 if (VAR_15 == -1)
  return (-1);
 VAR_13 = FUNC_5(VAR_15);
 if (VAR_13 == ((void*)0))
  return (-1);
 VAR_13->fd = FUNC_3(VAR_11, VAR_3);
 if (VAR_13->fd == -1)
  return (-1);
 VAR_13->rid = -1;
 if (FUNC_1(VAR_13->fd, VAR_5, &VAR_12) == -1) {
  FUNC_0(VAR_13->fd);
  VAR_13->fd = -1;
  return (-1);
 }
 VAR_13->addr = VAR_12.address;
 VAR_13->size = VAR_12.size;
 VAR_13->ofs = 0;
 VAR_13->ptr = FUNC_2(((void*)0), VAR_13->size, VAR_6 | VAR_7,
     VAR_1 | VAR_2, VAR_13->fd, VAR_13->ofs);
 return (VAR_15);
}
