
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w8001_coord {int x; int y; int tsw; } ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, struct w8001_coord *VAR_1)
{
 VAR_1->x = (VAR_0[1] << 7) | VAR_0[2];
 VAR_1->y = (VAR_0[3] << 7) | VAR_0[4];
 VAR_1->tsw = VAR_0[0] & 0x01;
}
