
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct resource {scalar_t__ size; scalar_t__ ofs; void* ptr; int fd; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 struct resource* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,void*,scalar_t__) ;

int
FUNC_3(int VAR_5, off_t VAR_6, void *VAR_7, ssize_t VAR_8)
{
 struct resource *VAR_9;
 volatile void *VAR_10;
 off_t VAR_11;
 ssize_t VAR_12;

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9 == ((void*)0))
  return (0);
 if (VAR_6 < 0 || VAR_6 > VAR_9->size - VAR_8) {
  VAR_4 = VAR_1;
  return (0);
 }
 VAR_6 += VAR_9->ofs;
 if (VAR_9->ptr != VAR_2) {
  VAR_10 = VAR_9->ptr + VAR_6;
  switch (VAR_8) {
  case 1:
   *((volatile uint8_t *)VAR_10) = *((uint8_t *)VAR_7);
   break;
  case 2:
   *((volatile uint16_t *)VAR_10) = *((uint16_t *)VAR_7);
   break;
  case 4:
   *((volatile uint32_t *)VAR_10) = *((uint32_t *)VAR_7);
   break;
  default:
   VAR_4 = VAR_0;
   return (0);
  }
 } else {
  VAR_11 = FUNC_0(VAR_9->fd, VAR_6, VAR_3);
  if (VAR_11 != VAR_6)
   return (0);
  VAR_12 = FUNC_2(VAR_9->fd, VAR_7, VAR_8);
  if (VAR_12 != VAR_8)
   return (0);
 }
 return (1);
}
