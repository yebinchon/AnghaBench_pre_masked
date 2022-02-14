
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {scalar_t__ masklength; int available_scan_masks; scalar_t__ num_channels; int channels; } ;
struct ad7266_state {scalar_t__ mode; scalar_t__ range; int fixed_addr; } ;
struct ad7266_chan_info {scalar_t__ num_channels; int scan_masks; int channels; } ;


 int FUNC_0 (int,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ad7266_chan_info* VAR_3 ;
 struct ad7266_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_4)
{
 struct ad7266_state *VAR_5 = FUNC_1(VAR_4);
 bool VAR_6, VAR_7;
 const struct ad7266_chan_info *VAR_8;
 int VAR_9;

 VAR_6 = VAR_5->mode != VAR_1;
 VAR_7 = (VAR_5->range == VAR_2) |
      (VAR_5->mode == VAR_0);

 VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_5->fixed_addr);
 VAR_8 = &VAR_3[VAR_9];

 VAR_4->channels = VAR_8->channels;
 VAR_4->num_channels = VAR_8->num_channels;
 VAR_4->available_scan_masks = VAR_8->scan_masks;
 VAR_4->masklength = VAR_8->num_channels - 1;
}
