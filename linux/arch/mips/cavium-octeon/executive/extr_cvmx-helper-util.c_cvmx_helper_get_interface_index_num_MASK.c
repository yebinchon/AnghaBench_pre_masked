
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int FUNC_1(int VAR_0)
{
 if (VAR_0 < 32)
  return VAR_0 & 15;
 else if (VAR_0 < 36)
  return VAR_0 & 3;
 else if (VAR_0 < 40)
  return VAR_0 & 3;
 else if (VAR_0 < 44)
  return VAR_0 & 3;
 else if (VAR_0 < 48)
  return VAR_0 & 3;
 else
  FUNC_0("cvmx_helper_get_interface_index_num: "
        "Illegal IPD port number\n");

 return -1;
}
