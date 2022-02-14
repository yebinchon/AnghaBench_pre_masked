
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int uncompressed_size; } ;
typedef TYPE_1__ unpack_descriptor_t ;
typedef int off_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int,char*,size_t,int *,TYPE_1__*) ;

__attribute__((used)) static off_t
FUNC_5(int VAR_0, int VAR_1, char *VAR_2, size_t VAR_3, off_t *VAR_4)
{
 unpack_descriptor_t VAR_5;

 VAR_0 = FUNC_0(VAR_0);
 if (VAR_0 == -1)
  FUNC_1("dup");
 VAR_1 = FUNC_0(VAR_1);
 if (VAR_1 == -1)
  FUNC_1("dup");

 FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5);
 FUNC_2(&VAR_5, VAR_4);
 FUNC_3(&VAR_5);


 return (VAR_5.uncompressed_size);
}
