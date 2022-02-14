
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pvrdma_port_width { ____Placeholder_pvrdma_port_width } pvrdma_port_width ;







__attribute__((used)) static inline int FUNC_0(enum pvrdma_port_width VAR_0)
{
 switch (VAR_0) {
 case 130: return 1;
 case 129: return 4;
 case 128: return 8;
 case 131: return 12;
 default: return -1;
 }
}
